<?php

use Illuminate\Support\Facades\Route;
use App\Http\Controllers\BlogController;

Route::get("/", [BlogController::class, "index"]);
Route::get("/create", [BlogController::class, "create"]);
Route::post("/create", [BlogController::class, "store"]);
Route::get(
    "/contact",
    [BlogController::class, "contact"]
);

Route::get("/iblog/{id}", [BlogController::class, "iblog"])->name("ind.blog");
Route::get("/deleteblog/{id}", [BlogController::class, "deleteBlog"])->name("blog.delete");
Route::get("/editblog/{id}", [BlogController::class, "editBlog"])->name("blog.edit");
Route::post("/update/{id}", [BlogController::class, "updateBlog"])->name("blog.update");
