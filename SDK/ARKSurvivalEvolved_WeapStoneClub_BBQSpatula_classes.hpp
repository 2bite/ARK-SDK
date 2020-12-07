#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapStoneClub_BBQSpatula_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C
// 0x0000 (0x0D58 - 0x0D58)
class AWeapStoneClub_BBQSpatula_C : public AWeapStoneClub_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapStoneClub_BBQSpatula.WeapStoneClub_BBQSpatula_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapStoneClub_BBQSpatula(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
