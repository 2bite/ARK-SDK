#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_KeepReleaseTargetOutOfMesh_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C
// 0x000C (0x0984 - 0x0978)
class ABuff_KeepReleaseTargetOutOfMesh_C : public APrimalBuff
{
public:
	struct FVector                                     origin_loc;                                               // 0x0978(0x000C) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_KeepReleaseTargetOutOfMesh.Buff_KeepReleaseTargetOutOfMesh_C");
		return ptr;
	}


	void BuffTickServer(float* DeltaTime);
	void UserConstructionScript();
	void ExecuteUbergraph_Buff_KeepReleaseTargetOutOfMesh(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
