<?php
 
namespace App\Http\Controllers;

use App\Http\Controllers\Controller;

class HomeController extends Controller{
    public function index(){
        $title = 'Tisha';
        $body = 'Ola';
        // $data = compact($title, $body);

        return view('sayujya', ['title' => $title, 'body' => $body]);
    }
}