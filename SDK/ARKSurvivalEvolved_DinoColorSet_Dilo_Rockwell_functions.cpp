// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Dilo_Rockwell_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Dilo_Rockwell.DinoColorSet_Dilo_Rockwell_C.ExecuteUbergraph_DinoColorSet_Dilo_Rockwell
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Dilo_Rockwell_C::ExecuteUbergraph_DinoColorSet_Dilo_Rockwell(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Dilo_Rockwell.DinoColorSet_Dilo_Rockwell_C.ExecuteUbergraph_DinoColorSet_Dilo_Rockwell");

	UDinoColorSet_Dilo_Rockwell_C_ExecuteUbergraph_DinoColorSet_Dilo_Rockwell_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
