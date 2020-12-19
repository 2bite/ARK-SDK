// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Polarvia_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Polarvia.DinoColorSet_Polarvia_C.ExecuteUbergraph_DinoColorSet_Polarvia
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Polarvia_C::ExecuteUbergraph_DinoColorSet_Polarvia(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Polarvia.DinoColorSet_Polarvia_C.ExecuteUbergraph_DinoColorSet_Polarvia");

	UDinoColorSet_Polarvia_C_ExecuteUbergraph_DinoColorSet_Polarvia_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
