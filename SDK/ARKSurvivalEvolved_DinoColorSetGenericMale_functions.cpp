// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSetGenericMale_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSetGenericMale.DinoColorSetGenericMale_C.ExecuteUbergraph_DinoColorSetGenericMale
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSetGenericMale_C::ExecuteUbergraph_DinoColorSetGenericMale(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSetGenericMale.DinoColorSetGenericMale_C.ExecuteUbergraph_DinoColorSetGenericMale");

	UDinoColorSetGenericMale_C_ExecuteUbergraph_DinoColorSetGenericMale_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
