// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Megalosaur_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Megalosaur.DinoColorSet_Megalosaur_C.ExecuteUbergraph_DinoColorSet_Megalosaur
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Megalosaur_C::ExecuteUbergraph_DinoColorSet_Megalosaur(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Megalosaur.DinoColorSet_Megalosaur_C.ExecuteUbergraph_DinoColorSet_Megalosaur");

	UDinoColorSet_Megalosaur_C_ExecuteUbergraph_DinoColorSet_Megalosaur_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
