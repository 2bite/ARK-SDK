#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ProjFlare_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass ProjFlare.ProjFlare_C
// 0x0010 (0x0698 - 0x0688)
class AProjFlare_C : public APrimalProjectileFlare
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x0688(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             Audio1;                                                   // 0x0690(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass ProjFlare.ProjFlare_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_ProjFlare(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
