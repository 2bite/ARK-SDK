// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Rex_Corrupt_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Rex_Corrupt.DinoColorSet_Rex_Corrupt_C.ExecuteUbergraph_DinoColorSet_Rex_Corrupt
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Rex_Corrupt_C::ExecuteUbergraph_DinoColorSet_Rex_Corrupt(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Rex_Corrupt.DinoColorSet_Rex_Corrupt_C.ExecuteUbergraph_DinoColorSet_Rex_Corrupt");

	UDinoColorSet_Rex_Corrupt_C_ExecuteUbergraph_DinoColorSet_Rex_Corrupt_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
