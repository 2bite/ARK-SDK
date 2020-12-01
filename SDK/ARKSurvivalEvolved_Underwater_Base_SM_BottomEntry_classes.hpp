#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Underwater_Base_SM_BottomEntry_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C
// 0x0031 (0x0EF9 - 0x0EC8)
class AUnderwater_Base_SM_BottomEntry_C : public AUnderwater_Base_SM_C
{
public:
	class UStaticMeshComponent*                        WaterPlaneBottom;                                         // 0x0EC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        WaterPlaneTop;                                            // 0x0ED0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh4;                                              // 0x0ED8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh3;                                              // 0x0EE0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh2;                                              // 0x0EE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        StaticMesh1;                                              // 0x0EF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bSetTimer;                                                // 0x0EF8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Underwater_Base_SM_BottomEntry.Underwater_Base_SM_BottomEntry_C");
		return ptr;
	}


	void ChangedCompartmentFloodState();
	void UpdatedVisuals();
	void BPUnstasis();
	void ReceiveBeginPlay();
	void UserConstructionScript();
	void UpdateVisuals();
	void ExecuteUbergraph_Underwater_Base_SM_BottomEntry(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
