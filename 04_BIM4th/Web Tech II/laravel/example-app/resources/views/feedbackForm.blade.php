@extends('layout')

@section('title')
    SSSSTR
@endsection

@section('content')
    <form action="{{url('/')}}/feedback" method="post">
        <input type="hidden" name="_token" value="{{ csrf_token() }}">
        Name:
        <input type="text" name="name">
        Email:
        <input type="text" name="email">
        
        <input type="submit">
    </form>
@endsection
