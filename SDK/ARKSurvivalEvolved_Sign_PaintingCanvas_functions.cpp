// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Sign_PaintingCanvas_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.UserConstructionScript
// ()

void ASign_PaintingCanvas_C::UserConstructionScript()
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.UserConstructionScript");

	ASign_PaintingCanvas_C_UserConstructionScript_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.ExecuteUbergraph_Sign_PaintingCanvas
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void ASign_PaintingCanvas_C::ExecuteUbergraph_Sign_PaintingCanvas(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function Sign_PaintingCanvas.Sign_PaintingCanvas_C.ExecuteUbergraph_Sign_PaintingCanvas");

	ASign_PaintingCanvas_C_ExecuteUbergraph_Sign_PaintingCanvas_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
