#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_Full_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Underwater_Base_SM_Full.Underwater_Base_SM_Full_C
// 0x0008 (0x0ED8 - 0x0ED0)
class AUnderwater_Base_SM_Full_C : public AUnderwater_Base_SM_C
{
public:
	class UBoxComponent*                               Collision_Bottom;                                         // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM_Full.Underwater_Base_SM_Full_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Underwater_Base_SM_Full(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
