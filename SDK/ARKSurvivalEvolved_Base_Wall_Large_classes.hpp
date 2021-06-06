#pragma once

// ARKSurvivalEvolved (329.9) SDK

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
// 0x0038 (0x0B20 - 0x0AE8)
class ABase_Wall_Large_C : public AStructureBaseBP_C
{
public:
	class UStaticMeshComponent*                        Wall4;                                                    // 0x0AE8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall3;                                                    // 0x0AF0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall2;                                                    // 0x0AF8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UStaticMeshComponent*                        Wall1;                                                    // 0x0B00(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class USceneComponent*                             WallTransform;                                            // 0x0B08(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               IsGlass;                                                  // 0x0B10(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0B11(0x0007) MISSED OFFSET
	class UStaticMesh*                                 WallMesh;                                                 // 0x0B18(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

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
