#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeapOilJar_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeapOilJar.WeapOilJar_C
// 0x0010 (0x0EB0 - 0x0EA0)
class AWeapOilJar_C : public APrimalWeaponGrenade
{
public:
	class UStaticMeshComponent*                        StaticMesh3P;                                             // 0x0EA0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1P;                                             // 0x0EA8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeapOilJar.WeapOilJar_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeapOilJar(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
