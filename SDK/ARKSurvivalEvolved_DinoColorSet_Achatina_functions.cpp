// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoColorSet_Achatina_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoColorSet_Achatina.DinoColorSet_Achatina_C.ExecuteUbergraph_DinoColorSet_Achatina
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoColorSet_Achatina_C::ExecuteUbergraph_DinoColorSet_Achatina(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoColorSet_Achatina.DinoColorSet_Achatina_C.ExecuteUbergraph_DinoColorSet_Achatina");

	UDinoColorSet_Achatina_C_ExecuteUbergraph_DinoColorSet_Achatina_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
