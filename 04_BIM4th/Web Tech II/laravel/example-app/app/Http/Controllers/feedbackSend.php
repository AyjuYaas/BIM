<?php
namespace App\Http\Controllers;

use App\Http\Controllers;

class feedbackSend extends Controller {
    public function showForm(){
        return view('feedbackForm');
    }

    public function getData(){
        return view('showForm');
    }
}
