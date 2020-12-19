// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Tusoteuthis_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Tusoteuthis.DinoColorSet_Tusoteuthis_C.ExecuteUbergraph_DinoColorSet_Tusoteuthis
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Tusoteuthis_C::ExecuteUbergraph_DinoColorSet_Tusoteuthis(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Tusoteuthis.DinoColorSet_Tusoteuthis_C.ExecuteUbergraph_DinoColorSet_Tusoteuthis");

	UDinoColorSet_Tusoteuthis_C_ExecuteUbergraph_DinoColorSet_Tusoteuthis_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
