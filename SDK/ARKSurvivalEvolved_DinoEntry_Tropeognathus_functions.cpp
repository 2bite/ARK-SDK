// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Tropeognathus_parameters.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function DinoEntry_Tropeognathus.DinoEntry_Tropeognathus_C.ExecuteUbergraph_DinoEntry_Tropeognathus
// ()
// Parameters:
// int                            EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UDinoEntry_Tropeognathus_C::ExecuteUbergraph_DinoEntry_Tropeognathus(int EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function DinoEntry_Tropeognathus.DinoEntry_Tropeognathus_C.ExecuteUbergraph_DinoEntry_Tropeognathus");

	UDinoEntry_Tropeognathus_C_ExecuteUbergraph_DinoEntry_Tropeognathus_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
