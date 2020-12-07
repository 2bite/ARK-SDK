// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Plesi_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Plesi.DinoEntry_Plesi_C.ExecuteUbergraph_DinoEntry_Plesi
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Plesi_C::ExecuteUbergraph_DinoEntry_Plesi(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Plesi.DinoEntry_Plesi_C.ExecuteUbergraph_DinoEntry_Plesi");

	UDinoEntry_Plesi_C_ExecuteUbergraph_DinoEntry_Plesi_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
