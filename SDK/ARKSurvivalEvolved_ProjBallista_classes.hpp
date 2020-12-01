#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjBallista_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjBallista.ProjBallista_C
// 0x0000 (0x0680 - 0x0680)
class AProjBallista_C : public APrimalProjectileArrow
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjBallista.ProjBallista_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjBallista(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
