#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapGPS_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapGPS.WeapGPS_C
// 0x0008 (0x1000 - 0x0FF8)
class AWeapGPS_C : public APrimalWeaponGPS
{
public:
	class UPointLightComponent*                        PointLight1;                                              // 0x0FF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapGPS.WeapGPS_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapGPS(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
