#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_LargeWall_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeWall_Metal.BP_LargeWall_Metal_C
// 0x0000 (0x0AF8 - 0x0AF8)
class ABP_LargeWall_Metal_C : public ABase_Wall_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeWall_Metal.BP_LargeWall_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_LargeWall_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
