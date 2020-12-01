#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Wall_Large_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Wall_Large.Base_Wall_Large_C
// 0x0038 (0x0AF0 - 0x0AB8)
class ABase_Wall_Large_C : public AStructureBaseBP_C
{
public:
	class UStaticMeshComponent*                        Wall4;                                                    // 0x0AB8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall3;                                                    // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall2;                                                    // 0x0AC8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall1;                                                    // 0x0AD0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WallTransform;                                            // 0x0AD8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsGlass;                                                  // 0x0AE0(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0AE1(0x0007) MISSED OFFSET
	class UStaticMesh*                                 WallMesh;                                                 // 0x0AE8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Wall_Large.Base_Wall_Large_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Wall_Large(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
