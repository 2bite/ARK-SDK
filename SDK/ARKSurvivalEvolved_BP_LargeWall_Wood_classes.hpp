#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_LargeWall_Wood_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_LargeWall_Wood.BP_LargeWall_Wood_C
// 0x0000 (0x0B20 - 0x0B20)
class ABP_LargeWall_Wood_C : public ABase_Wall_Large_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_LargeWall_Wood.BP_LargeWall_Wood_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_LargeWall_Wood(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
