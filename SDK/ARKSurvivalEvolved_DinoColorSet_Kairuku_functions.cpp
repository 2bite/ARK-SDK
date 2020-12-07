// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Kairuku_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Kairuku.DinoColorSet_Kairuku_C.ExecuteUbergraph_DinoColorSet_Kairuku
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Kairuku_C::ExecuteUbergraph_DinoColorSet_Kairuku(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Kairuku.DinoColorSet_Kairuku_C.ExecuteUbergraph_DinoColorSet_Kairuku");

	UDinoColorSet_Kairuku_C_ExecuteUbergraph_DinoColorSet_Kairuku_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
