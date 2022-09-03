// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Fjordhawk_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Fjordhawk.DinoColorSet_Fjordhawk_C.ExecuteUbergraph_DinoColorSet_Fjordhawk
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Fjordhawk_C::ExecuteUbergraph_DinoColorSet_Fjordhawk(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Fjordhawk.DinoColorSet_Fjordhawk_C.ExecuteUbergraph_DinoColorSet_Fjordhawk");

	UDinoColorSet_Fjordhawk_C_ExecuteUbergraph_DinoColorSet_Fjordhawk_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
