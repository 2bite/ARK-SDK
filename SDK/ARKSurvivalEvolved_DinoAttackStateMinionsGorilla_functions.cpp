// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoAttackStateMinionsGorilla_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoAttackStateMinionsGorilla.DinoAttackStateMinionsGorilla_C.ExecuteUbergraph_DinoAttackStateMinionsGorilla
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoAttackStateMinionsGorilla_C::ExecuteUbergraph_DinoAttackStateMinionsGorilla(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoAttackStateMinionsGorilla.DinoAttackStateMinionsGorilla_C.ExecuteUbergraph_DinoAttackStateMinionsGorilla");

	UDinoAttackStateMinionsGorilla_C_ExecuteUbergraph_DinoAttackStateMinionsGorilla_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
