<?php
 
namespace App\Http\Controllers;
 
use App\Models\User;
use Illuminate\View\View;
use Resources\views;
use Illuminate\Http\Request; 

class HomeController extends Controller
{
    public function index(){
        $title = 'Tisha';
        $body = '<h1>Ola</h1>';
        $data = compact($title, $body);

        return view('sayujya', ['title' => $title, 'body' => $body]);
    }
}