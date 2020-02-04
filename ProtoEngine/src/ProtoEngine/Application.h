#pragma once
#include <iostream>

namespace PEngine{
	class Application {
	public:
	protected:
		virtual void Init() {
			
		}
		virtual void Start() = 0;
		virtual void Update(float Delta) = 0;
	private:
		
	};

	
}
