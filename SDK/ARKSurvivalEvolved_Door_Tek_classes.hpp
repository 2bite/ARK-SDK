#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Door_Tek_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Door_Tek.Door_Tek_C
// 0x0013 (0x0D48 - 0x0D35)
class ADoor_Tek_C : public ADoor_Tek_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D35(0x0003) MISSED OFFSET
	class USphereComponent*                            Sphere1;                                                  // 0x0D38(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D40(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Door_Tek.Door_Tek_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Door_Tek(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
