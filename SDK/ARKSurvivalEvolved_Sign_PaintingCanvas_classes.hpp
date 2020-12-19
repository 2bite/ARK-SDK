#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_PaintingCanvas_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Sign_PaintingCanvas.Sign_PaintingCanvas_C
// 0x0008 (0x0AC8 - 0x0AC0)
class ASign_PaintingCanvas_C : public AStructureBaseBP_C
{
public:
	class UStructurePaintingComponent*                 StructurePainting1;                                       // 0x0AC0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Sign_PaintingCanvas.Sign_PaintingCanvas_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Sign_PaintingCanvas(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
