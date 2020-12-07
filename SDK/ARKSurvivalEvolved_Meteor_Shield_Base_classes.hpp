#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Meteor_Shield_Base_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Meteor_Shield_Base.Meteor_Shield_Base_C
// 0x0024 (0x048C - 0x0468)
class AMeteor_Shield_Base_C : public AActor
{
public:
	class UStaticMeshComponent*                        ShieldMeshComponent;                                      // 0x0468(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             Root;                                                     // 0x0470(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 ShieldMesh;                                               // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     ShieldMeshScale;                                          // 0x0480(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Meteor_Shield_Base.Meteor_Shield_Base_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Meteor_Shield_Base(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
