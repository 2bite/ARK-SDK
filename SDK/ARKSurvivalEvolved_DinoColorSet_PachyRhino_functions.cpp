// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_PachyRhino_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_PachyRhino.DinoColorSet_PachyRhino_C.ExecuteUbergraph_DinoColorSet_PachyRhino
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_PachyRhino_C::ExecuteUbergraph_DinoColorSet_PachyRhino(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_PachyRhino.DinoColorSet_PachyRhino_C.ExecuteUbergraph_DinoColorSet_PachyRhino");

	UDinoColorSet_PachyRhino_C_ExecuteUbergraph_DinoColorSet_PachyRhino_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
