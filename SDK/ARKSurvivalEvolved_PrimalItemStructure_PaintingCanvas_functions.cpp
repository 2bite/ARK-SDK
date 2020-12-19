// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_PrimalItemStructure_PaintingCanvas_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function PrimalItemStructure_PaintingCanvas.PrimalItemStructure_PaintingCanvas_C.ExecuteUbergraph_PrimalItemStructure_PaintingCanvas
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UPrimalItemStructure_PaintingCanvas_C::ExecuteUbergraph_PrimalItemStructure_PaintingCanvas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function PrimalItemStructure_PaintingCanvas.PrimalItemStructure_PaintingCanvas_C.ExecuteUbergraph_PrimalItemStructure_PaintingCanvas");

	UPrimalItemStructure_PaintingCanvas_C_ExecuteUbergraph_PrimalItemStructure_PaintingCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
