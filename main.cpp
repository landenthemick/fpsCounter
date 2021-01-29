
FPS fps;

	while (window.isOpen())
    {
    // game loop stuff;
    
     fps.update();
	   std::ostringstream ss;
	   ss << fps.getFPS();
		
	   window.setTitle(ss.str());
	   }