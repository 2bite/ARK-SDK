// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Mosasaurus_Ocean_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Mosasaurus_Ocean.DinoColorSet_Mosasaurus_Ocean_C.ExecuteUbergraph_DinoColorSet_Mosasaurus_Ocean
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Mosasaurus_Ocean_C::ExecuteUbergraph_DinoColorSet_Mosasaurus_Ocean(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Mosasaurus_Ocean.DinoColorSet_Mosasaurus_Ocean_C.ExecuteUbergraph_DinoColorSet_Mosasaurus_Ocean");

	UDinoColorSet_Mosasaurus_Ocean_C_ExecuteUbergraph_DinoColorSet_Mosasaurus_Ocean_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
