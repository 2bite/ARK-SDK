#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Basic.hpp"
#include "ARKSurvivalEvolved_CoreUObject_classes.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Script Structs
//---------------------------------------------------------------------------

// UserDefinedStruct ChibiMeshAttachments.ChibiMeshAttachments
// 0x0028
struct FChibiMeshAttachments
{
	struct FName                                       SocketName_2_700A9C214EAC35955848639A37223A02;            // 0x0000(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMesh*                                 StaticMesh_5_8BD1CE2042771926A14BC8A93FD33B3D;            // 0x0008(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FVector                                     PositionOffset_10_5770236B4037C6A6C5CE81866D513E1F;       // 0x0010(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	struct FRotator                                    RotationOffset_11_FCCD494947C67094DBF98F9B540831C8;       // 0x001C(0x000C) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
