#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_WarMap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_WarMap.Sign_WarMap_C
// 0x0049 (0x0B09 - 0x0AC0)
class ASign_WarMap_C : public AStructureBaseBP_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UWorld*                                      CallFunc_K2_GetWorld_ReturnValue;                         // 0x0AC8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class AWorldSettings*                              CallFunc_GetWorldSettings_ReturnValue;                    // 0x0AD0(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class APrimalWorldSettings*                        K2Node_DynamicCast_AsPrimalWorldSettings;                 // 0x0AD8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast_CastSuccess;                           // 0x0AE0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class APrimalWorldSettings*                        K2Node_DynamicCast_AsPrimalWorldSettings2;                // 0x0AE8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast2_CastSuccess;                          // 0x0AF0(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_NotEqual_ObjectObject_ReturnValue;               // 0x0AF1(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               CallFunc_IsDedicatedServer_ReturnValue;                   // 0x0AF2(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	unsigned char                                      UnknownData01[0x5];                                       // 0x0AF3(0x0005) MISSED OFFSET
	class UMaterialInterface*                          CallFunc_GetMaterial_ReturnValue;                         // 0x0AF8(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	class UMaterialInstanceDynamic*                    K2Node_DynamicCast_AsMaterialInstanceDynamic;             // 0x0B00(0x0008) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)
	bool                                               K2Node_DynamicCast3_CastSuccess;                          // 0x0B08(0x0001) (ZeroConstructor, Transient, DuplicateTransient, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_WarMap.Sign_WarMap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ReceiveBeginPlay();
	void SetupMat();
	void ExecuteUbergraph_Sign_WarMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
