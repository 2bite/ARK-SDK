#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0013 (0x0D70 - 0x0D5D)
class ADoor_Tek_C : public ADoor_Tek_Base_C
{
public:
	unsigned char                                      UnknownData00[0x3];                                       // 0x0D5D(0x0003) MISSED OFFSET
	class USphereComponent*                            Sphere1;                                                  // 0x0D60(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0D68(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

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
