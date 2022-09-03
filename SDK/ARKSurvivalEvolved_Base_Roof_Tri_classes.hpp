#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Roof_Tri_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Roof_Tri.Base_Roof_Tri_C
// 0x0001 (0x0AE9 - 0x0AE8)
class ABase_Roof_Tri_C : public AStructureBaseBP_C
{
public:
	bool                                               IsGlass;                                                  // 0x0AE8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Roof_Tri.Base_Roof_Tri_C");
		return ptr;
	}


	bool IsValidSnapPointTo(class APrimalStructure** childStructure, int* MySnapPointToIndex);
	bool BPOverrideSnappedToTransform(class APrimalStructure** childStructure, int* ChildSnapFromIndex, struct FName* ChildSnapFromName, struct FVector* UnsnappedPlacementPos, struct FRotator* UnsnappedPlacementRot, struct FVector* SnappedPlacementPos, struct FRotator* SnappedPlacementRot, int* SnapToIndex, struct FName* SnapToName, struct FVector* OutLocation, struct FRotator* OutRotation, int* bForceInvalidateSnap);
	void UserConstructionScript();
	void ExecuteUbergraph_Base_Roof_Tri(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
