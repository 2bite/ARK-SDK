#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapCrossbow_Explosive_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapCrossbow_Explosive.WeapCrossbow_Explosive_C
// 0x0008 (0x0E60 - 0x0E58)
class AWeapCrossbow_Explosive_C : public AWeapCrossbow_C
{
public:
	class UStaticMeshComponent*                        ArrowMesh1P;                                              // 0x0E58(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapCrossbow_Explosive.WeapCrossbow_Explosive_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapCrossbow_Explosive(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
