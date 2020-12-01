// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_EngramEntry_PaintingCanvas_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function EngramEntry_PaintingCanvas.EngramEntry_PaintingCanvas_C.ExecuteUbergraph_EngramEntry_PaintingCanvas
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UEngramEntry_PaintingCanvas_C::ExecuteUbergraph_EngramEntry_PaintingCanvas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function EngramEntry_PaintingCanvas.EngramEntry_PaintingCanvas_C.ExecuteUbergraph_EngramEntry_PaintingCanvas");

	UEngramEntry_PaintingCanvas_C_ExecuteUbergraph_EngramEntry_PaintingCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
