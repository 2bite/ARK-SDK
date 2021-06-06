// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Quetz_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Quetz_Rockwell.DinoColorSet_Quetz_Rockwell_C.ExecuteUbergraph_DinoColorSet_Quetz_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Quetz_Rockwell_C::ExecuteUbergraph_DinoColorSet_Quetz_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Quetz_Rockwell.DinoColorSet_Quetz_Rockwell_C.ExecuteUbergraph_DinoColorSet_Quetz_Rockwell");

	UDinoColorSet_Quetz_Rockwell_C_ExecuteUbergraph_DinoColorSet_Quetz_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
