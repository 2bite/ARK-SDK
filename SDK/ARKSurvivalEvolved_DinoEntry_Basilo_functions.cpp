// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Basilo_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Basilo.DinoEntry_Basilo_C.ExecuteUbergraph_DinoEntry_Basilo
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Basilo_C::ExecuteUbergraph_DinoEntry_Basilo(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Basilo.DinoEntry_Basilo_C.ExecuteUbergraph_DinoEntry_Basilo");

	UDinoEntry_Basilo_C_ExecuteUbergraph_DinoEntry_Basilo_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
