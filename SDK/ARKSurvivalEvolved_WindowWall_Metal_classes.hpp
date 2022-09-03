#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WindowWall_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WindowWall_Metal.WindowWall_Metal_C
// 0x0000 (0x0AE8 - 0x0AE8)
class AWindowWall_Metal_C : public AWindowWall_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WindowWall_Metal.WindowWall_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WindowWall_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
