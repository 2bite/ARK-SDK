#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjSpaceDolphinChargedLaser2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C
// 0x0000 (0x08A0 - 0x08A0)
class AProjSpaceDolphinChargedLaser2_C : public AProjSpaceDolphinChargedLaser0_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjSpaceDolphinChargedLaser2.ProjSpaceDolphinChargedLaser2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjSpaceDolphinChargedLaser2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
