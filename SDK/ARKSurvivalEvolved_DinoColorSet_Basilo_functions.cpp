// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Basilo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Basilo.DinoColorSet_Basilo_C.ExecuteUbergraph_DinoColorSet_Basilo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Basilo_C::ExecuteUbergraph_DinoColorSet_Basilo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Basilo.DinoColorSet_Basilo_C.ExecuteUbergraph_DinoColorSet_Basilo");

	UDinoColorSet_Basilo_C_ExecuteUbergraph_DinoColorSet_Basilo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
