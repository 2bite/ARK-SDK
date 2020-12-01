#pragma once

// ARKSurvivalEvolved (301.1) SDK

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
// 0x0010 (0x0E50 - 0x0E40)
class AWeapOilJar_C : public APrimalWeaponGrenade
{
public:
	class UStaticMeshComponent*                        StaticMesh3P;                                             // 0x0E40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1P;                                             // 0x0E48(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
