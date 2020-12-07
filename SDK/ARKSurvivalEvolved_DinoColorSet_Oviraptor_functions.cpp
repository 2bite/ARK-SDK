// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Oviraptor_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Oviraptor.DinoColorSet_Oviraptor_C.ExecuteUbergraph_DinoColorSet_Oviraptor
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Oviraptor_C::ExecuteUbergraph_DinoColorSet_Oviraptor(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Oviraptor.DinoColorSet_Oviraptor_C.ExecuteUbergraph_DinoColorSet_Oviraptor");

	UDinoColorSet_Oviraptor_C_ExecuteUbergraph_DinoColorSet_Oviraptor_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
