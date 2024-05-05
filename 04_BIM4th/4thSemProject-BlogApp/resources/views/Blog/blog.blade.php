@extends('Blog.layout.main')

@push('home-active')
    active
@endpush

@section('contents')
    @foreach ($blogs as $blog)
        <x-individual-blog title="{{ $blog->title }}" body="{{ $blog->content }}" id="{{ $blog->blog_id }}" />
    @endforeach
@endsection
