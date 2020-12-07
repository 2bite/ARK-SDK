#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjMudTrail_Corrupted_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C
// 0x0000 (0x0518 - 0x0518)
class AProjMudTrail_Corrupted_C : public AProjMudTrail_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjMudTrail_Corrupted.ProjMudTrail_Corrupted_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjMudTrail_Corrupted(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
