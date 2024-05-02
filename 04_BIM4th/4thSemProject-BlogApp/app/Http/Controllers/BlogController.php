<?php

namespace App\Http\Controllers;

use Illuminate\Http\Request;
use App\Models\Blog;

class BlogController extends Controller {
    public function index() {
        $blogs = Blog::all();
        $data = compact("blogs");
        return view('home')->with($data);
    }

    public function iblog($id) {
        $blog = Blog::find($id);
        $data = compact('blog');
        return view('iblog')->with($data);
    }

    public function create() {
        $url = url('/create');
        $title = 'Create-Blog';
        $active = 'active';
        $button = 'Submit';
        $arr = ['title' => "", 'body' => ""];
        $blog = (object) $arr;
        $data = compact("title", "active", "button", "url", "blog");
        return view('create')->with($data);
    }

    public function contact() {
        return view('contact');
    }

    public function store(Request $request) {
        $blog = new Blog();
        $blog->title = $request->title;
        $blog->body = $request->body;
        $blog->save();

        return redirect('/')->with('success', 'Succesfully Posted');
    }

    public function deleteBlog($id) {
        $blog = Blog::find($id);
        if (!is_null($blog)) $blog->delete();

        return redirect('/');
    }

    function editBlog($id) {
        $blog = Blog::find($id);
        if (!is_null($blog)) {
            $url = url('/update/') . '/' . $id;
            $title = 'Update-Blog';
            $active = "";
            $button = "Update";
            $data = compact('blog', 'url', 'title', 'active', 'button');
            return view('create')->with($data);
        }

        return redirect('/');
    }

    function updateBlog($id, Request $request) {
        $blog = Blog::find($id);
        if (!is_null($blog)) {
            $blog->title = $request->title;
            $blog->body = $request->body;
            $blog->save();
        }

        return redirect()->route('ind.blog', ['id' => $id]);
    }
}
