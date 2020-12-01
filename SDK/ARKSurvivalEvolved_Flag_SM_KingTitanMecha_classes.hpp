#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Flag_SM_KingTitanMecha_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Flag_SM_KingTitanMecha.Flag_SM_KingTitanMecha_C
// 0x0000 (0x0AC0 - 0x0AC0)
class AFlag_SM_KingTitanMecha_C : public AFlag_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Flag_SM_KingTitanMecha.Flag_SM_KingTitanMecha_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Flag_SM_KingTitanMecha(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
